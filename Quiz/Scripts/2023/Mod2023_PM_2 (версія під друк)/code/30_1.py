try:
    a,b,c=9,8,7
    def g(a,b,c=6):
        print(a,b,c,end=" ")
    
    g(a=5,2,b=0)
    print(a,b,c)
    
except: print('error')
