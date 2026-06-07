try:
    
    a,b,c=6,7,9
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(0,c=3,b=3)
    print(a,b,c)
    
except: print('error')
