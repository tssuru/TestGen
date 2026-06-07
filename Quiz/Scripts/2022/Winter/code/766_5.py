try:
    
    a,b,c=7,9,6
    def h(a,b,c=7):
        print(a,b,c,end="")
    
    h(4,b=0)
    print(a,b,c)
    
except: print('error')
