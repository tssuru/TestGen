try:
    
    a,b,c=8,9,6
    def h(a,b=8,c=7):
        print(a,b,c,end="")
    
    h(b=5,c=4,0)
    print(a,b,c)
    
except: print('error')
