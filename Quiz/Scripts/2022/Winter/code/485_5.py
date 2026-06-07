try:
    
    a,b,c=7,9,6
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(a=0,5,a=3)
    print(a,b,c)
    
except: print('error')
