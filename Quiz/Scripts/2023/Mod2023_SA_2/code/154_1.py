try:
    a,b,c=9,6,8
    def g(a,b=7,c=6):
        print(a,b,c,end=" ")
    
    g(1,0)
    print(a,b,c)
    
except: print('error')
