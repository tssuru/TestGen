try:
    a,b,c=2,3,9
    def h(b):
        global c
        a+=1
        b=4
        c=2
        return a+b+c
    
    a,b,c=7,4,1
    print(h(a),a,b,c)
    
except: print('error')
