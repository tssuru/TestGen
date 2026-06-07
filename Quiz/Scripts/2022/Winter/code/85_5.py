try:
    
    a,b,c=7,8,9
    def g(a,b,c=6):
        print(a,b,c,end="")
    
    g(3,1,2)
    print(a,b,c)
    
except: print('error')
