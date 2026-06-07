try:
    
    a,b,c=9,7,8
    def f(a,b,c=6):
        print(a,b,c,end="")
    
    f(b=4,c=1,5)
    print(a,b,c)
    
except: print('error')
