try:
    
    a,b,c=6,7,9
    def h(a,b=8,c=8):
        print(a,b,c,end="")
    
    h(c=0,b=5,a=4)
    print(a,b,c)
    
except: print('error')
