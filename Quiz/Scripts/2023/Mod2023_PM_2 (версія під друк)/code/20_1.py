try:
    a,b,c=7,7,9
    def h(a,b=8,c=6):
        print(a,b,c,end=" ")
    
    h(b=4,c=0,4)
    print(a,b,c)
    
except: print('error')
