try:
    
    a,b,c=6,9,7
    def h(a,b=6,c=8):
        print(a,b,c,end="")
    
    h(a=4,5,a=4)
    print(a,b,c)
    
except: print('error')
