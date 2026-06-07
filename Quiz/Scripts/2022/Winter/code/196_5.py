try:
    
    a,b,c=7,6,9
    def h(a,b=8,c=7):
        print(a,b,c,end="")
    
    h(4,3,5)
    print(a,b,c)
    
except: print('error')
