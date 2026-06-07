try:
    
    a,b,c=7,8,9
    def f(a,b,c=6):
        print(a,b,c,end="")
    
    f(2,b=4)
    print(a,b,c)
    
except: print('error')
