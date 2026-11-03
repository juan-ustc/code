i=0
j='y'
print('欢迎记录GPA')
while j=='y':
    GPA=float(input('您的GPA是:'))
    if GPA>4.3:
        print('胡说')
    else:
        i=i+1
        j=input('是否继续记录:(y/n):')
print('您总共录入',i,'次，最终GPA为',GPA)
        
