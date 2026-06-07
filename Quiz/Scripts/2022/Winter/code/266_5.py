try:
    
    a,b,c=7,7,8
    def f(a,b,c=6):
        print(a,b,c,end="")
    
    f(2,4,5)
    print(a,b,c)
    
except: print('error')
