try:
    
    a,b,c=7,6,8
    def g(a,b=9,c=7):
        print(a,b,c,end="")
    
    g(5,c=4,b=0)
    print(a,b,c)
    
except: print('error')
