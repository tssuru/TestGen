try:
    
    a,b,c=6,7,6
    def h(a,b=9,c=8):
        print(a,b,c,end="")
    
    h(b=0,c=3,4)
    print(a,b,c)
    
except: print('error')
