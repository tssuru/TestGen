try:
    
    a,b,c=7,9,6
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(c=0,a=5,b=4)
    print(a,b,c)
    
except: print('error')
