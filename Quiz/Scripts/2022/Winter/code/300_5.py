try:
    
    a,b,c=8,9,8
    def f(a,b=7,c=6):
        print(a,b,c,end="")
    
    f(1,4)
    print(a,b,c)
    
except: print('error')
