try:
    
    a,b,c=9,6,7
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(4,c=5,b=2)
    print(a,b,c)
    
except: print('error')
