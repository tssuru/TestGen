try:
    a,b,c=6,9,7
    def f(a,b,c=8):
        print(a,b,c,end=" ")
    
    f(a=0,5,b=4)
    print(a,b,c)
    
except: print('error')
