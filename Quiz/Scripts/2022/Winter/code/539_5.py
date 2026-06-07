try:
    
    a,b,c=9,7,6
    def h(a,b,c=8):
        print(a,b,c,end="")
    
    h(3,5,4)
    print(a,b,c)
    
except: print('error')
