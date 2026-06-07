try:
    
    a,b,c=7,9,6
    def h(a,b=7,c=8):
        print(a,b,c,end="")
    
    h(a=5,3,b=2)
    print(a,b,c)
    
except: print('error')
