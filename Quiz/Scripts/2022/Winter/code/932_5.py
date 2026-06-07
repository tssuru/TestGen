try:
    
    a,b,c=7,9,8
    def f(a,b,c=6):
        print(a,b,c,end="")
    
    f(a=1,b=3,a=4)
    print(a,b,c)
    
except: print('error')
