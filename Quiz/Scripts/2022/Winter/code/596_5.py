try:
    
    a,b,c=8,6,8
    def g(a,b=9,c=7):
        print(a,b,c,end="")
    
    g(2,4)
    print(a,b,c)
    
except: print('error')
