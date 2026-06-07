try:
    
    a,b,c=9,8,6
    def f(a,b=7,c):
        print(a,b,c,end="")
    
    f(2,3,5)
    print(a,b,c)
    
except: print('error')
