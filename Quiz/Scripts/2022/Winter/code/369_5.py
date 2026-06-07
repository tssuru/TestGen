try:
    
    a,b,c=7,8,9
    def f(a,b=6,c=8):
        print(a,b,c,end="")
    
    f(4,5,a=4)
    print(a,b,c)
    
except: print('error')
