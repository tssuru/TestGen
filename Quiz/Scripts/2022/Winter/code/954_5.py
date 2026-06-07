try:
    
    a,b,c=9,6,8
    def f(a,b=8,c):
        print(a,b,c,end="")
    
    f(a=4,5,c=0)
    print(a,b,c)
    
except: print('error')
