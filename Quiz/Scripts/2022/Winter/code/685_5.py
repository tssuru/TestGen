try:
    
    a,b,c=9,7,6
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(c=2,c=0,a=3)
    print(a,b,c)
    
except: print('error')
