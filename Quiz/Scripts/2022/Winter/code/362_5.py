try:
    
    a,b,c=8,7,6
    def h(a,b,c=6):
        print(a,b,c,end="")
    
    h(b=5,c=4,3)
    print(a,b,c)
    
except: print('error')
