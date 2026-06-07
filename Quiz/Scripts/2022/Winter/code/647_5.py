try:
    
    a,b,c=9,9,6
    def h(a,b=7,c=8):
        print(a,b,c,end="")
    
    h(1,4,b=3)
    print(a,b,c)
    
except: print('error')
