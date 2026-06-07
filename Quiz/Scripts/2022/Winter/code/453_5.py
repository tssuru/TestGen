try:
    
    a,b,c=6,7,9
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(b=4,c=0,2)
    print(a,b,c)
    
except: print('error')
