try:
    
    a,b,c=8,9,6
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(4,c=0,b=2)
    print(a,b,c)
    
except: print('error')
