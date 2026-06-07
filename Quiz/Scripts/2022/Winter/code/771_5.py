try:
    
    a,b,c=8,7,9
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(4,b=3)
    print(a,b,c)
    
except: print('error')
