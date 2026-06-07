try:
    
    a,b,c=7,9,8
    def g(a,b=7,c=6):
        print(a,b,c,end="")
    
    g(5,3)
    print(a,b,c)
    
except: print('error')
