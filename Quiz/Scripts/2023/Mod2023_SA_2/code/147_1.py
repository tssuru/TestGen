try:
    a,b,c=7,9,8
    def g(a,b,c):
        print(a,b,c,end=" ")
    
    g(5,a=3)
    print(a,b,c)
    
except: print('error')
