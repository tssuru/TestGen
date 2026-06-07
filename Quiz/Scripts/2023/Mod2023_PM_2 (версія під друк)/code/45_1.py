try:
    a,b,c=6,8,9
    def f(a,b=7,c):
        print(a,b,c,end=" ")
    
    f(2,1,c=5)
    print(a,b,c)
    
except: print('error')
