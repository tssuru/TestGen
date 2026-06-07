try:
    
    a,b,c=9,8,9
    def f(a,b,c=7):
        print(a,b,c,end="")
    
    f(1,a=4)
    print(a,b,c)
    
except: print('error')
