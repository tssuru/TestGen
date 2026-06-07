try:
    
    a,b,c=7,9,6
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(2,c=0,b=5)
    print(a,b,c)
    
except: print('error')
