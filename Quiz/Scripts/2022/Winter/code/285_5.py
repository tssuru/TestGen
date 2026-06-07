try:
    
    a,b,c=6,7,9
    def h(a,b=8,c):
        print(a,b,c,end="")
    
    h(5,a=3)
    print(a,b,c)
    
except: print('error')
