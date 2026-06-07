try:
    a,b,c=9,7,6
    def g(a,b=8,c=6):
        print(a,b,c,end=" ")
    
    g(1,b=0)
    print(a,b,c)
    
except: print('error')
