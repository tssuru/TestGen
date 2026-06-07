try:
    
    a,b,c=9,7,6
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(a=4,0,b=2)
    print(a,b,c)
    
except: print('error')
