try:
    a,b,c=6,3,1
    def h(b):
        a+=1
        b=3
        c=5
        return a+b+c
    
    a,b,c=5,4,6
    print(h(a),a,b,c)
    
except: print('error')
