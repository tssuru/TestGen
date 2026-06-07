try:
    
    a,b,c=7,9,8
    def f(a,b,c=7):
        print(a,b,c,end="")
    
    f(2,3)
    print(a,b,c)
    
except: print('error')
