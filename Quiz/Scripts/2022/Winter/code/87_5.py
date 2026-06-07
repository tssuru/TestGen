try:
    
    a,b,c=9,9,8
    def f(a,b=7,c):
        print(a,b,c,end="")
    
    f(a=4,5,c=3)
    print(a,b,c)
    
except: print('error')
