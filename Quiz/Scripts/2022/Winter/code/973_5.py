try:
    
    a,b,c=9,6,7
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(2,5,1)
    print(a,b,c)
    
except: print('error')
