try:
    
    a,b,c=7,8,6
    def g(a,b=9,c=7):
        print(a,b,c,end="")
    
    g(4,2)
    print(a,b,c)
    
except: print('error')
