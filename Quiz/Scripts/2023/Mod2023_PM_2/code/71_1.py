try:
    a,b,c=7,6,8
    def g(a,b=9,c=6):
        print(a,b,c,end=" ")
    
    g(0,1,5)
    print(a,b,c)
    
except: print('error')
